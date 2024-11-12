int main () {
    char t1s4lOE [(726 - 626)];
    char num [(840 - 740)];
    int INKeMtj;
    int ARNpLtwh9rd;
    int g31rFvmRyMG;
    int NsYpJty;
    int doikZeGxvu;
    int Tv0q7cA;
    int i;
    int exdck9BqDhHt;
    int SlpU9dNVyt7;
    int PxNkUw4DLAG;
    INKeMtj = (385 - 385);
    ARNpLtwh9rd = (808 - 808);
    cin >> g31rFvmRyMG >> t1s4lOE >> NsYpJty;
    Tv0q7cA = strlen (t1s4lOE);
    {
        i = (69 - 69);
        for (; i < Tv0q7cA;) {
            int y;
            y = (957 - 956);
            for (PxNkUw4DLAG = (110 - 110); PxNkUw4DLAG < Tv0q7cA -(694 - 693) - i; PxNkUw4DLAG++) {
                y = y * g31rFvmRyMG;
            }
            if (t1s4lOE[i] <= '9')
                ARNpLtwh9rd = ARNpLtwh9rd +(t1s4lOE[i] - '0') * y;
            if ((t1s4lOE[i] >= 'A') && (t1s4lOE[i] < 'a'))
                ARNpLtwh9rd = ARNpLtwh9rd +(t1s4lOE[i] - 'A' + (895 - 885)) * y;
            if (t1s4lOE[i] >= 'a')
                ARNpLtwh9rd = ARNpLtwh9rd +(t1s4lOE[i] - 'a' + (492 - 482)) * y;
            i++;
        }
    }
    doikZeGxvu = ARNpLtwh9rd;
    do {
        INKeMtj++;
        ARNpLtwh9rd = ARNpLtwh9rd / NsYpJty;
    }
    while (ARNpLtwh9rd > (854 - 854));
    {
        exdck9BqDhHt = (109 - 109);
        for (; exdck9BqDhHt < INKeMtj;) {
            if (doikZeGxvu % NsYpJty < (58 - 48))
                num[INKeMtj -(485 - 484) - exdck9BqDhHt] = doikZeGxvu % NsYpJty +(387 - 339);
            if (doikZeGxvu % NsYpJty >= (110 - 100))
                num[INKeMtj -(453 - 452) - exdck9BqDhHt] = doikZeGxvu % NsYpJty +(622 - 567);
            exdck9BqDhHt++;
            doikZeGxvu = doikZeGxvu / NsYpJty;
        }
    }
    {
        SlpU9dNVyt7 = 0;
        for (; SlpU9dNVyt7 < INKeMtj;) {
            cout << num[SlpU9dNVyt7];
            SlpU9dNVyt7 = SlpU9dNVyt7 +1;
        }
    }
    return 0;
}

