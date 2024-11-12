typedef long  long  dua6GBpTC;
char eo24DRE [110], a [110], b [110];

int main () {
    while (gets (eo24DRE)) {
        int eCQhosHO;
        eCQhosHO = strlen (a);
        int i;
        i = (320 - 320);
        puts ("");
        scanf ("%s%s ", a, b);
        for (; eo24DRE[i];) {
            if (!(' ' != eo24DRE[i]))
                putchar (' '), i = i + 1;
            else {
                int kP9agRu;
                kP9agRu = 0;
                for (; a[kP9agRu]; kP9agRu = kP9agRu + 1)
                    if (!(eo24DRE[i + kP9agRu] == a[kP9agRu]))
                        break;
                if (a[kP9agRu] == 0) {
                    i = i + eCQhosHO;
                    printf ("%s", b);
                }
                else {
                    for (; eo24DRE[i] && eo24DRE[i] != ' ';)
                        putchar (eo24DRE[i++]);
                };
            };
        };
    }
    return 0;
}

