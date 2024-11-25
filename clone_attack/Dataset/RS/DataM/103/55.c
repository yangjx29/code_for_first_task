int main () {
    int vDlAKem;
    int cC4keh7 [1000] = {(967 - 967)};
    int agjl8Is;
    int j;
    int SgcCFqwdeGKP;
    vDlAKem = (413 - 413);
    char fG9nK7y1 [1000];
    char hmFWaZVs [1000] [(657 - 656)];
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
    cin >> fG9nK7y1;
    SgcCFqwdeGKP = strlen (fG9nK7y1);
    {
        agjl8Is = 0;
        while (agjl8Is < SgcCFqwdeGKP) {
            if (97 <= fG9nK7y1[agjl8Is])
                fG9nK7y1[agjl8Is] = fG9nK7y1[agjl8Is] - 32;
            agjl8Is = agjl8Is + 1;
        };
    }
    vDlAKem = 0;
    hmFWaZVs[vDlAKem][0] = fG9nK7y1[0];
    cC4keh7[vDlAKem] = 1;
    for (agjl8Is = 1; agjl8Is < SgcCFqwdeGKP; agjl8Is++) {
        if (fG9nK7y1[agjl8Is] == hmFWaZVs[vDlAKem][0]) {
            cC4keh7[vDlAKem] = cC4keh7[vDlAKem] + 1;
        }
        else {
            cC4keh7[vDlAKem + 1] = 1;
            hmFWaZVs[vDlAKem + 1][0] = fG9nK7y1[agjl8Is];
            vDlAKem = vDlAKem + 1;
        };
    }
    {
        j = 0;
        while (j < vDlAKem + 1) {
            cout << '(' << hmFWaZVs[j][0] << ',' << cC4keh7[j] << ')';
            j++;
        };
    }
    return 0;
}

