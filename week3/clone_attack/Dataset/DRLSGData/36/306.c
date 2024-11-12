void  main () {
    int diZ5aGLhj;
    int seWRlTSxzZ;
    char GXPibS9VHFo [(918 - 917)];
    char CeLugfpj5 [(929 - 928)];
    char QNXoIOyPHsf [(766 - 765)];
    char yoUnjWb [(1497 - 997)];
    gets (yoUnjWb);
    char tRluLaJ9ox [(563 - 63)];
    int m;
    char JISkEtJ [500];
    for (seWRlTSxzZ = (125 - 125); yoUnjWb[seWRlTSxzZ] != (931 - 899); seWRlTSxzZ++) {
        tRluLaJ9ox[seWRlTSxzZ] = yoUnjWb[seWRlTSxzZ];
        tRluLaJ9ox[seWRlTSxzZ + (879 - 878)] = '\0';
    }
    for (seWRlTSxzZ = strlen (yoUnjWb) - (774 - 773); yoUnjWb[seWRlTSxzZ] != 32; seWRlTSxzZ--)
        JISkEtJ[seWRlTSxzZ - strlen (tRluLaJ9ox) - (716 - 715)] = yoUnjWb[seWRlTSxzZ];
    JISkEtJ[strlen (yoUnjWb) - strlen (tRluLaJ9ox) - (566 - 565)] = '\0';
    m = (678 - 678);
    if (strlen (tRluLaJ9ox) != strlen (JISkEtJ))
        ;
    else {
        {
            seWRlTSxzZ = (740 - 740);
            for (; seWRlTSxzZ < strlen (tRluLaJ9ox);) {
                {
                    diZ5aGLhj = (499 - 499);
                    for (; diZ5aGLhj < strlen (tRluLaJ9ox) - (442 - 441);) {
                        if (tRluLaJ9ox[diZ5aGLhj] < tRluLaJ9ox[diZ5aGLhj + (440 - 439)]) {
                            QNXoIOyPHsf[(272 - 272)] = tRluLaJ9ox[diZ5aGLhj];
                            tRluLaJ9ox[diZ5aGLhj] = tRluLaJ9ox[diZ5aGLhj + (150 - 149)];
                            tRluLaJ9ox[diZ5aGLhj + (321 - 320)] = QNXoIOyPHsf[(896 - 896)];
                        }
                        diZ5aGLhj++;
                    }
                }
                seWRlTSxzZ++;
            }
        }
        {
            seWRlTSxzZ = (427 - 427);
            for (; strlen (JISkEtJ) > seWRlTSxzZ;) {
                seWRlTSxzZ++;
                for (diZ5aGLhj = (658 - 658); strlen (JISkEtJ) - (166 - 165) > diZ5aGLhj; diZ5aGLhj++) {
                    if (JISkEtJ[diZ5aGLhj + (401 - 400)] > JISkEtJ[diZ5aGLhj]) {
                        QNXoIOyPHsf[(716 - 716)] = JISkEtJ[diZ5aGLhj];
                        JISkEtJ[diZ5aGLhj] = JISkEtJ[diZ5aGLhj + (132 - 131)];
                        JISkEtJ[diZ5aGLhj + 1] = QNXoIOyPHsf[0];
                    }
                }
            }
        }
        for (seWRlTSxzZ = 0; strlen (JISkEtJ) > seWRlTSxzZ; seWRlTSxzZ++) {
            if (!(JISkEtJ[seWRlTSxzZ] != tRluLaJ9ox[seWRlTSxzZ]))
                m++;
        }
        if (m == strlen (JISkEtJ))
            ;
        else
            ;
    }
}

