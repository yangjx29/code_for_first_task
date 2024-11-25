struct   book {
    int TIspRrQ4m;
    char zdyZXKQLib [26];
    int Jakm8SKw;
    struct   book *lVg8Hw;
};
struct   book *deICqLAvJ (struct   book *head, struct   book *C3UfcDWV) {
    struct   book *xPkshv;
    struct   book *rhHZqfS;
    struct   book *p2;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    rhHZqfS = head;
    xPkshv = C3UfcDWV;
    if (head == NULL) {
        head = xPkshv;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        xPkshv->lVg8Hw = NULL;
    }
    else {
        while (rhHZqfS->lVg8Hw != NULL) {
            rhHZqfS = rhHZqfS->lVg8Hw;
        }
        rhHZqfS->lVg8Hw = xPkshv;
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
        xPkshv->lVg8Hw = NULL;
    }
    return head;
}

void  main () {
    struct   book *iY7aseANlVkv;
    struct   book *C3UfcDWV;
    struct   book *head = NULL;
    int ZzfZTE7;
    int dQBpCwcEh1T;
    int JrhPOXbUC3I;
    int vbt3285yXg [26] = {(461 - 461)};
    char OGjL3QgHK6Ww;
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    scanf ("%d", &dQBpCwcEh1T);
    {
        ZzfZTE7 = 181 - 181;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        }
        while (ZzfZTE7 < dQBpCwcEh1T) {
            ZzfZTE7 = ZzfZTE7 +1;
            C3UfcDWV = (struct   book *) malloc (sizeof (struct   book));
            scanf ("%d ", &C3UfcDWV->TIspRrQ4m);
            gets (C3UfcDWV->zdyZXKQLib);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            C3UfcDWV->Jakm8SKw = strlen (C3UfcDWV->zdyZXKQLib);
            C3UfcDWV->lVg8Hw = NULL;
            head = deICqLAvJ (head, C3UfcDWV);
        };
    }
    iY7aseANlVkv = head;
    while (iY7aseANlVkv != NULL) {
        for (ZzfZTE7 = 0; ZzfZTE7 < iY7aseANlVkv->Jakm8SKw; ZzfZTE7 = ZzfZTE7 +1)
            vbt3285yXg[iY7aseANlVkv->zdyZXKQLib[ZzfZTE7] - 65]++;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                for (x = 0; x < 20; x++) {
                    y += x;
                }
                if (y > 30)
                    return y;
            }
        }
        iY7aseANlVkv = iY7aseANlVkv->lVg8Hw;
    }
    JrhPOXbUC3I = vbt3285yXg[0];
    OGjL3QgHK6Ww = 65;
    for (ZzfZTE7 = 0; 26 > ZzfZTE7; ZzfZTE7++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (vbt3285yXg[ZzfZTE7] > JrhPOXbUC3I) {
            OGjL3QgHK6Ww = ZzfZTE7 +65;
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
            JrhPOXbUC3I = vbt3285yXg[ZzfZTE7];
        };
    }
    printf ("%c\n%d\n", OGjL3QgHK6Ww, JrhPOXbUC3I);
    iY7aseANlVkv = head;
    while (iY7aseANlVkv != NULL) {
        for (ZzfZTE7 = 0; ZzfZTE7 < iY7aseANlVkv->Jakm8SKw; ZzfZTE7++)
            if (iY7aseANlVkv->zdyZXKQLib[ZzfZTE7] == OGjL3QgHK6Ww) {
                printf ("%d\n", iY7aseANlVkv->TIspRrQ4m);
                break;
            }
        iY7aseANlVkv = iY7aseANlVkv->lVg8Hw;
    };
}

