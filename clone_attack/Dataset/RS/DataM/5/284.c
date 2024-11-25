int main () {
    int AOKBDrYmlxb, dpYWqcD, q = (386 - 386), milv9HM4WuUo, b, EkmEygLNO = (492 - 492), e = (868 - 868), l, g;
    float ufYIWB, WoRu8qID;
    char zMwv68nPZlgs [(1162 - 662)], cUprdoKf8D [(751 - 251)];
    scanf ("%f\n", &WoRu8qID);
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
    scanf ("%s\n%s", zMwv68nPZlgs, cUprdoKf8D);
    if (!(strlen (cUprdoKf8D) == strlen (zMwv68nPZlgs)))
        printf ("error");
    if (!(strlen (cUprdoKf8D) != strlen (zMwv68nPZlgs))) {
        for (dpYWqcD = (445 - 445); !('\0' == zMwv68nPZlgs[dpYWqcD]); dpYWqcD = dpYWqcD + 1) {
            if (zMwv68nPZlgs[dpYWqcD] != 'A' && !('T' == zMwv68nPZlgs[dpYWqcD]) && !('G' == zMwv68nPZlgs[dpYWqcD]) && zMwv68nPZlgs[dpYWqcD] != 'C') {
                EkmEygLNO = EkmEygLNO +1;
            };
        }
        {
            AOKBDrYmlxb = 778 - 778;
            while (!('\0' == cUprdoKf8D[AOKBDrYmlxb])) {
                if (cUprdoKf8D[AOKBDrYmlxb] != 'A' && cUprdoKf8D[AOKBDrYmlxb] != 'T' && cUprdoKf8D[AOKBDrYmlxb] != 'G' && cUprdoKf8D[AOKBDrYmlxb] != 'C') {
                    e = e + 1;
                }
                AOKBDrYmlxb = AOKBDrYmlxb +1;
            };
        }
        g = EkmEygLNO +e;
        l = strlen (zMwv68nPZlgs);
        {
            int Sho2zDYAUxre = 0;
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
            while (Sho2zDYAUxre < l) {
                if (zMwv68nPZlgs[Sho2zDYAUxre] == cUprdoKf8D[Sho2zDYAUxre])
                    q = q + 1;
                Sho2zDYAUxre = Sho2zDYAUxre +1;
            };
        }
        milv9HM4WuUo = strlen (zMwv68nPZlgs);
        b = q;
        ufYIWB = (float) b / (float) milv9HM4WuUo;
        if (g != 0) {
        }
        else {
            if (ufYIWB >= WoRu8qID)
                printf ("yes");
            if (ufYIWB < WoRu8qID)
                printf ("no");
        };
    }
    return 0;
}

