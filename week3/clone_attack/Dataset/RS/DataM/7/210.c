main () {
    char str [(992 - 735)];
    char GwixW72R1 [257];
    char rep [257];
    int Cd65V4a;
    int ekYGJZiesXb;
    int o9zUrC;
    int L7lzHy129;
    Cd65V4a = 0;
    ekYGJZiesXb = 0;
    o9zUrC = 0;
    gets (str);
    gets (GwixW72R1);
    gets (rep);
    L7lzHy129 = strlen (GwixW72R1);
    for (Cd65V4a = 0; !('\0' == str[Cd65V4a]); Cd65V4a = Cd65V4a +1) {
        if (!(GwixW72R1[ekYGJZiesXb] != str[Cd65V4a])) {
            ekYGJZiesXb++;
            if (ekYGJZiesXb == L7lzHy129) {
                o9zUrC = Cd65V4a;
                break;
            };
        }
        else
            ekYGJZiesXb = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    for (Cd65V4a = 0; str[Cd65V4a] != '\0'; Cd65V4a = Cd65V4a +1) {
        if (Cd65V4a == o9zUrC - L7lzHy129 +1) {
            Cd65V4a = o9zUrC;
            printf ("%s", rep);
        }
        else
            printf ("%c", str[Cd65V4a]);
    }
    getchar ();
    getchar ();
    getchar ();
}

