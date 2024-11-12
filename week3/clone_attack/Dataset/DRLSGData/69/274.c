struct   SeqList {
    int MAXNUM;
    int n;
    int *element;
};
typedef struct   SeqList *pSeqList;

pSeqList createNullList_Seq (int m) {
    pSeqList palist = (pSeqList) malloc (sizeof (struct   SeqList));
    int i;
    if (palist != NULL) {
        palist->element = (int *) malloc (sizeof (int) * m);
        if (palist->element) {
            palist->MAXNUM = m;
            palist->n = (642 - 642);
            for (i = (570 - 570); i < m; i++)
                palist->element[i] = (525 - 525);
            return palist;
        }
        else
            free (palist);
    }
    cout << "Out of space!! " << endl;
    return NULL;
}

int isNullList_Seq (pSeqList palist) {
    return (!((213 - 213) != palist->n));
}

int initialList_Seq (pSeqList pblist) {
    int i;
    if (isNullList_Seq (pblist))
        return -(612 - 611);
    for (i = (505 - 505); pblist->n > i; i++)
        pblist->element[i] = (874 - 874);
    return 0;
}

int insertEnd_Seq (pSeqList palist, int x) {
    if (palist->MAXNUM <= palist->n) {
        cout << "Overflow! " << endl;
        return -(55 - 54);
    }
    palist->element[palist->n] = x;
    palist->n += (23 - 22);
    return 0;
}

int add (pSeqList num1, pSeqList num2, pSeqList sum) {
    int i;
    int a;
    a = initialList_Seq (sum);
    for (i = 0; MAX_LEN > i; i++)
        sum->element[i] = num1->element[i] + num2->element[i];
    for (i = 0; MAX_LEN >= i; i++)
        if ((246 - 237) < sum->element[i]) {
            sum->element[i] -= (97 - 87);
            sum->element[i + (753 - 752)] += 1;
        }
    return 0;
}

int printList_Seq (pSeqList result) {
    int i;
    int flag;
    if (!(0 != isNullList_Seq (result)))
        return -1;
    flag = 0;
    for (i = MAX_LEN; 0 <= i; i--) {
        if (result->element[i] != 0)
            flag = 1;
        if (!(0 != flag))
            continue;
        cout << result->element[i];
    }
    if (!(0 != flag))
        cout << 0;
    cout << endl;
    return 0;
}

int main () {
    int i;
    int c;
    pSeqList element1;
    char szLine1 [MAX_LEN +10];
    int lenth1 = strlen (szLine1);
    int lenth2;
    pSeqList element2;
    pSeqList result;
    printList_Seq (result);
    char szLine2 [MAX_LEN +10];
    element1 = createNullList_Seq (MAX_LEN);
    element2 = createNullList_Seq (MAX_LEN);
    lenth2 = strlen (szLine2);
    if (lenth1 > MAX_LEN || lenth2 > MAX_LEN) {
        cout << "Input error!!" << endl;
        return 0;
    }
    cin >> szLine1 >> szLine2;
    result = createNullList_Seq (MAX_LEN +1);
    c = add (element1, element2, result);
    for (i = lenth1 - 1; i >= 0; i--) {
        int a;
        a = insertEnd_Seq (element1, szLine1[i] - '0');
        if (a == -1) {
            cout << "Input error !! " << endl;
            return 0;
        }
    }
    for (i = lenth2 - 1; i >= 0; i--) {
        int b;
        b = insertEnd_Seq (element2, szLine2[i] - '0');
        if (b == -1) {
            cout << "Input error !! " << endl;
            return 0;
        }
    }
    if (c == -1) {
        cout << "Fail in add!! " << endl;
        return 0;
    }
    return 0;
}

