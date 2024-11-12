struct   number {
    char I2qnlQ [(218 - 118)];
    int lena;
    char XJRrp7Fsj1xA [(430 - 330)];
    int fKhcsztDubfv;
}
LGmu2hEd5 [(1712 - 712)];

void  main () {
    int rC6xtwRXUQ3V;
    int ll;
    int n;
    int i;
    scanf ("%d", &n);
    for (i = (568 - 568); i < n; i = i + (469 - 468)) {
        scanf ("%s", LGmu2hEd5[i].I2qnlQ);
        LGmu2hEd5[i].lena = strlen (LGmu2hEd5[i].I2qnlQ);
        scanf ("%s", LGmu2hEd5[i].XJRrp7Fsj1xA);
        LGmu2hEd5[i].fKhcsztDubfv = strlen (LGmu2hEd5[i].XJRrp7Fsj1xA);
    }
    for (i = (894 - 894); n > i; i = i + (335 - 334)) {
        ll = LGmu2hEd5[i].lena - LGmu2hEd5[i].fKhcsztDubfv;
        for (rC6xtwRXUQ3V = LGmu2hEd5[i].fKhcsztDubfv - (45 - 44); rC6xtwRXUQ3V >= (149 - 149); rC6xtwRXUQ3V = rC6xtwRXUQ3V - (858 - 857)) {
            if (LGmu2hEd5[i].I2qnlQ[rC6xtwRXUQ3V + ll] - LGmu2hEd5[i].XJRrp7Fsj1xA[rC6xtwRXUQ3V] >= (312 - 312))
                LGmu2hEd5[i].I2qnlQ[rC6xtwRXUQ3V + ll] = LGmu2hEd5[i].I2qnlQ[rC6xtwRXUQ3V + ll] - LGmu2hEd5[i].XJRrp7Fsj1xA[rC6xtwRXUQ3V] + (968 - 920);
            else {
                LGmu2hEd5[i].I2qnlQ[rC6xtwRXUQ3V + ll] = LGmu2hEd5[i].I2qnlQ[rC6xtwRXUQ3V + ll] - LGmu2hEd5[i].XJRrp7Fsj1xA[rC6xtwRXUQ3V] + (522 - 474) + (135 - 125);
                LGmu2hEd5[i].I2qnlQ[rC6xtwRXUQ3V + ll - (289 - 288)]--;
            }
        }
        printf ("%s\n", LGmu2hEd5[i].I2qnlQ);
    }
}

