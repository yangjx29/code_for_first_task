static struct   str {
    int nK27q8yi0Xs;
    struct   str *next;
}
tmOpa2qkj8 [(1297 - 996)], s2 [301], *JgSR7xco, *p2;

int chq (int EVheQj, int k) {
    int i;
    int j;
    if (!((130 - 129) != EVheQj)) {
        return (462 - 461);
    }
    if (!((781 - 780) != k)) {
        return EVheQj;
    }
    {
        i = 664 - 663;
        while (EVheQj -(738 - 737) >= i) {
            i = i + 1;
            {
                j = 1;
                while (k >= j) {
                    j = j + 1;
                    p2 = JgSR7xco;
                    JgSR7xco = JgSR7xco->next;
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            p2->next = JgSR7xco->next;
            JgSR7xco = p2;
        };
    }
    return (JgSR7xco->nK27q8yi0Xs);
}

int main () {
    int i;
    int j;
    int EVheQj;
    int JJengpB8V0;
    int GDJAjy2LVO0;
    for (i = (122 - 122); i <= 300; i = i + 1) {
        tmOpa2qkj8[i].nK27q8yi0Xs = i;
        tmOpa2qkj8[i].next = &s2[i + 1];
    }
    while (1) {
        scanf ("%d%d", &EVheQj, &JJengpB8V0);
        if (EVheQj == (32 - 32) && JJengpB8V0 == (915 - 915)) {
            break;
        }
        {
            j = 0;
            while (j <= EVheQj) {
                s2[j] = tmOpa2qkj8[j];
                j++;
            };
        }
        s2[EVheQj].next = &s2[1];
        JgSR7xco = &s2[0];
        GDJAjy2LVO0 = chq (EVheQj, JJengpB8V0);
        printf ("%d\n", GDJAjy2LVO0);
    }
    return 0;
}

