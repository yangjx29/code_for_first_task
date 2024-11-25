struct   SeqList {
    int V3NCkmQlVi;
    int TVQXg67oejsc;
    int *element;
};
typedef struct   SeqList *pSeqList;

pSeqList dvTNRwu (int m) {
    pSeqList q5nXTj7EklPy = (pSeqList) malloc (sizeof (struct   SeqList));
    int i;
    if (q5nXTj7EklPy != NULL) {
        q5nXTj7EklPy->element = (int *) malloc (sizeof (int) * m);
        if (q5nXTj7EklPy->element) {
            q5nXTj7EklPy->V3NCkmQlVi = m;
            q5nXTj7EklPy->TVQXg67oejsc = (755 - 755);
            for (i = (137 - 137); m > i; i = i + 1)
                q5nXTj7EklPy->element[i] = (960 - 960);
            return q5nXTj7EklPy;
        }
        else
            free (q5nXTj7EklPy);
    }
    cout << "Out of space!! " << endl;
    return NULL;
}

int isNullList_Seq (pSeqList q5nXTj7EklPy) {
    return (!((180 - 180) != q5nXTj7EklPy->TVQXg67oejsc));
}

int initialList_Seq (pSeqList pblist) {
    int i;
    if (isNullList_Seq (pblist))
        return -(83 - 82);
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    for (i = 0; pblist->TVQXg67oejsc > i; i = i + 1)
        pblist->element[i] = 0;
    return 0;
}

int insertEnd_Seq (pSeqList q5nXTj7EklPy, int x) {
    if (q5nXTj7EklPy->TVQXg67oejsc >= q5nXTj7EklPy->V3NCkmQlVi) {
        cout << "Overflow! " << endl;
        return -(986 - 985);
    }
    q5nXTj7EklPy->element[q5nXTj7EklPy->TVQXg67oejsc] = x;
    q5nXTj7EklPy->TVQXg67oejsc += 1;
    return 0;
}

int add (pSeqList num1, pSeqList num2, pSeqList sum) {
    int i;
    int Dfqkcr9;
    Dfqkcr9 = initialList_Seq (sum);
    for (i = 0; MAX_LEN > i; i = i + 1)
        sum->element[i] = num1->element[i] + num2->element[i];
    for (i = 0; i <= MAX_LEN; i = i + 1)
        if (sum->element[i] > 9) {
            sum->element[i] = sum->element[i] - 10;
            sum->element[i + 1] = sum->element[i + 1] + 1;
        }
    return 0;
}

int printList_Seq (pSeqList SP0EMOpou) {
    int Pojud5laxNH = 0;
    int i;
    if (isNullList_Seq (SP0EMOpou) == 0)
        return -1;
    {
        i = MAX_LEN;
        while (0 <= i) {
            if (!(0 == SP0EMOpou->element[i]))
                Pojud5laxNH = 1;
            if (Pojud5laxNH == 0)
                continue;
            cout << SP0EMOpou->element[i];
            i = i - 1;
        };
    }
    if (Pojud5laxNH == 0)
        cout << 0;
    cout << endl;
    return 0;
}

int main () {
    int i;
    pSeqList element1;
    element1 = dvTNRwu (MAX_LEN);
    pSeqList element2 = dvTNRwu (MAX_LEN);
    pSeqList SP0EMOpou = dvTNRwu (MAX_LEN +1);
    int c;
    c = add (element1, element2, SP0EMOpou);
    printList_Seq (SP0EMOpou);
    char szLine1 [MAX_LEN +10];
    int vELqB1NOrXF;
    vELqB1NOrXF = strlen (szLine1);
    char szLine2 [MAX_LEN +10];
    int lenth2;
    lenth2 = strlen (szLine2);
    if (vELqB1NOrXF > MAX_LEN || lenth2 > MAX_LEN) {
        cout << "Input error!!" << endl;
        return 0;
    }
    cin >> szLine1 >> szLine2;
    for (i = vELqB1NOrXF - 1; i >= 0; i = i - 1) {
        int Dfqkcr9 = insertEnd_Seq (element1, szLine1[i] - '0');
        if (Dfqkcr9 == -1) {
            cout << "Input error !! " << endl;
            return 0;
        };
    }
    for (i = lenth2 - 1; i >= 0; i = i - 1) {
        int b = insertEnd_Seq (element2, szLine2[i] - '0');
        if (b == -1) {
            cout << "Input error !! " << endl;
            return 0;
        };
    }
    if (c == -1) {
        cout << "Fail in add!! " << endl;
        return 0;
    }
    return 0;
}

