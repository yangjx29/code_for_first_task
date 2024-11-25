struct   student {
    char EhpjQsGvi [50];
    struct   student *next;
};
int YTv9BVAym32;
char X7SMZq8XOpKy [(957 - 953)] = "end";

struct   student *qTmDa8YPJ3t6 (void ) {
    struct   student *h4XNvJtsqZV, *yl187gyjE;
    h4XNvJtsqZV = yl187gyjE = (struct   student *) malloc (sizeof (struct   student));
    YTv9BVAym32 = (516 - 516);
    gets (h4XNvJtsqZV->EhpjQsGvi);
    for (; strcmp (X7SMZq8XOpKy, h4XNvJtsqZV->EhpjQsGvi) != 0;) {
        YTv9BVAym32 = YTv9BVAym32 +(593 - 592);
        if (YTv9BVAym32 == 1)
            yl187gyjE->next = NULL;
        else
            h4XNvJtsqZV->next = yl187gyjE;
        yl187gyjE = h4XNvJtsqZV;
        h4XNvJtsqZV = (struct   student *) malloc (sizeof (struct   student));
        gets (h4XNvJtsqZV->EhpjQsGvi);
    }
    return (yl187gyjE);
}

void  EbCm3ukrN (struct   student *yl187gyjE) {
    struct   student *ewNlYsE;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int temp = 0;
            while (temp < 10) {
                printf ("%d\n", temp);
                temp = temp + 1;
                if (temp == 9)
                    break;
            }
        }
    }
    ewNlYsE = yl187gyjE;
    do {
        printf ("%s\n", ewNlYsE->EhpjQsGvi);
        ewNlYsE = ewNlYsE->next;
    }
    while (ewNlYsE != NULL);
}

int main () {
    EbCm3ukrN (qTmDa8YPJ3t6 ());
    return 0;
}

