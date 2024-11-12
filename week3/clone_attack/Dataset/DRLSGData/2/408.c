struct   KhzK2bBY {
    int rUhA68D;
    char EypFNm [(841 - 814)];
}
KhzK2bBY [(1914 - 914)];

void  main () {
    char i24Oakjh [(578 - 552)];
    int rtTXVB3cbK;
    int QQAcV4rGtTj [(480 - 454)] = {(692 - 692)};
    int D2FZs9Lu5w, JyE8sNL, Vi5LQd29VN, IIVkNuP;
    int PqwWRb;
    int R5UL0hWskA [(1124 - 124)];
    rtTXVB3cbK = (428 - 428);
    scanf ("%d", &D2FZs9Lu5w);
    for (JyE8sNL = (578 - 578); D2FZs9Lu5w > JyE8sNL; JyE8sNL = JyE8sNL +(539 - 538)) {
        scanf ("%d %s", &KhzK2bBY[JyE8sNL].rUhA68D, KhzK2bBY[JyE8sNL].EypFNm);
    }
    for (JyE8sNL = (539 - 539); (715 - 689) > JyE8sNL; JyE8sNL = JyE8sNL +(350 - 349)) {
        i24Oakjh[JyE8sNL] = 'A' + JyE8sNL;
    }
    for (JyE8sNL = (792 - 792); D2FZs9Lu5w > JyE8sNL; JyE8sNL++) {
        R5UL0hWskA[JyE8sNL] = strlen (KhzK2bBY[JyE8sNL].EypFNm);
        for (Vi5LQd29VN = (808 - 808); Vi5LQd29VN < R5UL0hWskA[JyE8sNL]; Vi5LQd29VN++) {
            for (IIVkNuP = (876 - 876); IIVkNuP < (509 - 483); IIVkNuP++) {
                if (!(i24Oakjh[IIVkNuP] != KhzK2bBY[JyE8sNL].EypFNm[Vi5LQd29VN]))
                    QQAcV4rGtTj[IIVkNuP]++;
            }
        }
    }
    PqwWRb = QQAcV4rGtTj[(252 - 252)];
    for (JyE8sNL = (64 - 64); JyE8sNL < (86 - 60); JyE8sNL++) {
        if (QQAcV4rGtTj[JyE8sNL] > PqwWRb) {
            PqwWRb = QQAcV4rGtTj[JyE8sNL];
            rtTXVB3cbK = JyE8sNL;
        }
    }
    printf ("%c\n%d\n", i24Oakjh[rtTXVB3cbK], PqwWRb);
    for (JyE8sNL = (594 - 594); JyE8sNL < D2FZs9Lu5w; JyE8sNL++) {
        R5UL0hWskA[JyE8sNL] = strlen (KhzK2bBY[JyE8sNL].EypFNm);
        for (Vi5LQd29VN = (956 - 956); Vi5LQd29VN < R5UL0hWskA[JyE8sNL]; Vi5LQd29VN++) {
            if (KhzK2bBY[JyE8sNL].EypFNm[Vi5LQd29VN] == i24Oakjh[rtTXVB3cbK])
                printf ("%d\n", KhzK2bBY[JyE8sNL].rUhA68D);
        }
    }
}

