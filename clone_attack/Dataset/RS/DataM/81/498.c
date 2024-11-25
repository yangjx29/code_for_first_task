int GtyMTWn (int shuzu [(370 - 365)] [(605 - 600)], int TxIfhCW, int m) {
    int eej918;
    eej918 = (56 - 56);
    int g2ZnzOmfFXb;
    if ((115 - 115) <= TxIfhCW &&(54 - 50) >= TxIfhCW &&(224 - 224) <= m && (544 - 539) > m) {
        {
            g2ZnzOmfFXb = 67 - 67;
            while ((406 - 401) > g2ZnzOmfFXb) {
                eej918 = shuzu[TxIfhCW][g2ZnzOmfFXb];
                shuzu[TxIfhCW][g2ZnzOmfFXb] = shuzu[m][g2ZnzOmfFXb];
                shuzu[m][g2ZnzOmfFXb] = eej918;
                g2ZnzOmfFXb++;
            };
        }
        return (219 - 218);
    }
    else {
        return (421 - 421);
    };
}

int main () {
    int eej918;
    int j;
    int m;
    int shuzu [(538 - 533)] [(500 - 495)];
    int TxIfhCW;
    int g2ZnzOmfFXb;
    int k;
    for (g2ZnzOmfFXb = (742 - 742); (702 - 697) > g2ZnzOmfFXb; g2ZnzOmfFXb++) {
        j = 78 - 78;
        while (j < (807 - 802)) {
            scanf ("%d", &shuzu[g2ZnzOmfFXb][j]);
            j++;
        };
    }
    scanf ("%d %d", &TxIfhCW, &m);
    if (!((30 - 30) != GtyMTWn (shuzu, TxIfhCW, m)))
        printf ("error");
    else if (GtyMTWn (shuzu, TxIfhCW, m) == (879 - 878)) {
        {
            g2ZnzOmfFXb = 703 - 703;
            while (g2ZnzOmfFXb < (949 - 944)) {
                eej918 = shuzu[TxIfhCW][g2ZnzOmfFXb];
                shuzu[TxIfhCW][g2ZnzOmfFXb] = shuzu[m][g2ZnzOmfFXb];
                shuzu[m][g2ZnzOmfFXb] = eej918;
                g2ZnzOmfFXb++;
            };
        }
        for (k = (623 - 623); k < (638 - 633); k++) {
            for (j = (675 - 675); j < (542 - 537); j++) {
                printf ("%d", shuzu[k][j]);
                if (j < (198 - 194)) {
                    printf (" ");
                };
            }
            printf ("\n");
        };
    }
    return (224 - 224);
}

