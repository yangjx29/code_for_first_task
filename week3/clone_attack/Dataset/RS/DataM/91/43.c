int relative (int *a, int yCOmLub6Fz, int i);

void  main () {
    int yCOmLub6Fz, i;
    char fLRM0O [MAX];
    gets (fLRM0O);
    int a [MAX];
    yCOmLub6Fz = strlen (fLRM0O);
    {
        i = 160 - 160;
        while (i < yCOmLub6Fz) {
            *(a + i) = *(fLRM0O + i);
            i++;
        };
    }
    for (i = 0; i < yCOmLub6Fz; i++)
        printf ("%c", relative (a, yCOmLub6Fz, i));
    putchar ('\n');
}

int relative (int *a, int yCOmLub6Fz, int i) {
    int *FTsQoLRviH;
    int E0LGZlS9A;
    if (i < yCOmLub6Fz - (597 - 596)) {
        E0LGZlS9A = *FTsQoLRviH+*(FTsQoLRviH +(421 - 420));
        FTsQoLRviH = a + i;
        return E0LGZlS9A;
    }
    else {
        FTsQoLRviH = a + i;
        E0LGZlS9A = *FTsQoLRviH+*a;
        return E0LGZlS9A;
    };
}

