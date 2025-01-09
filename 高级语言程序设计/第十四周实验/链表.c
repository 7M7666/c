#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node *next;
} node;

// ��������
void prt(node *head);
node *new(void);
node *ins(node *head, int k, int data);
node *del(node *head, int k);
int len(node *head);

int main(int argc, const char *argv[]) {
    node *head = NULL;
    printf("����������,����-1��������\n");
    head = new();
    
    int choice, k, data;
    while (1) {
        printf("\n��ǰ������: %d\n", len(head));
        printf("=== ��������˵� ===\n");
        printf("1. ����Ԫ��\n");
        printf("2. ɾ��Ԫ��\n");
        printf("3. �������\n");
        printf("4. �˳�����\n");
        printf("��ѡ�����: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            printf("������Ҫ�����λ�ú�ֵ���ÿո������");
            scanf("%d %d", &k, &data);
            head = ins(head, k, data);
            break;
        case 2:
            if (head == NULL) {
                printf("����Ϊ�գ�\n");
                break;
            }
            printf("������Ҫɾ����λ�ã�");
            scanf("%d", &k);
            head = del(head, k);
            break;
        case 3:
            if (head == NULL) {
                printf("����Ϊ�գ�\n");
            } else {
                printf("�������ݣ�\n");
                prt(head);
            }
            break;
        case 4:
            // �ͷ������ڴ�
            while (head != NULL) {
                node *temp = head;
                head = head->next;
                free(temp);
            }
            printf("�������˳�\n");
            return 0;
        default:
            printf("��Ч��ѡ�����������룡\n");
        }
    }
}

node *new(void) {
    node *head = NULL;
    node *tail = NULL;  
    int number;
    
    do {
        scanf("%d", &number);
        if (number != -1) {
            node *p = (node *)malloc(sizeof(node));
            if (p == NULL) {
                printf("�ڴ����ʧ��\n");
                return head;
            }
            p->data = number;
            p->next = NULL;
            
            if (head == NULL) {
                head = tail = p;
            } else {
                tail->next = p;
                tail = p;
            }
        }
    } while (number != -1);
    
    return head;
}


int len(node *head) {
    int length = 0;
    node *current = head;
    while (current != NULL) {
        length++;
        current = current->next;
    }
    return length;
}

// �������Ԫ�صĺ���
void prt(node *head) {
    node *now = head;
    while (now!= NULL) {
        printf("%d\n", now->data);
        now = now->next;
    }
}

// ��ָ��λ�ò���Ԫ�صĺ���
node *ins(node *head, int k, int data) {
    node *temp = (node *)malloc(sizeof(node));
    if (temp == NULL) {
        printf("�ڴ����ʧ��\n");
        return head;
    }
    temp->data = data;
    if (k == 1) {
        temp->next = head;
        return temp;
    }
    node *now = head;
    for (int i = 1; i < k - 1 && now!= NULL; i++) {
        now = now->next;
    }
    if (now == NULL) {
        printf("����λ�ó��������ȣ�\n");
        free(temp);
        return head;
    }
    temp->next = now->next;
    now->next = temp;
    return head;
}

// ��ָ��λ��ɾ��Ԫ�صĺ���
node *del(node *head, int k) {
    if (head == NULL) {
        printf("����Ϊ�գ��޷�ɾ��Ԫ�أ�\n");
        return head;
    }
    if (k == 1) {
        node *temp = head;
        head = head->next;
        free(temp);
        return head;
    }
    node *prev = head;
    for (int i = 1; i < k - 1 && prev!= NULL; i++) {
        prev = prev->next;
    }
    if (prev == NULL || prev->next == NULL) {
        printf("ɾ��λ�ó��������ȣ�\n");
        return head;
    }
    node *temp = prev->next;
    prev->next = prev->next->next;
    free(temp);
    return head;
}