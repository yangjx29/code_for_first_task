int main () {
    int k;
    char ClGEMIF [(641 - 561)];
    char ZjIMHuCfQFX [(665 - 585)];
    int nlen1 = strlen (ClGEMIF), nlen2 = strlen (ZjIMHuCfQFX);
    char xKgUEH [(611 - 608)] = {'<', '=', '>'};
    cin.getline (ClGEMIF, 80);
    cin.getline (ZjIMHuCfQFX, 80);
    {
        int ZUJnbSaXY0WH = (362 - 362);
        while (ZUJnbSaXY0WH < nlen1) {
            if (ClGEMIF[ZUJnbSaXY0WH] >= 'A' && 'Z' >= ClGEMIF[ZUJnbSaXY0WH])
                ClGEMIF[ZUJnbSaXY0WH] += 'a' - 'A';
            ZUJnbSaXY0WH = ZUJnbSaXY0WH +1;
        };
    }
    for (int ZUJnbSaXY0WH = 0;
    ZUJnbSaXY0WH < nlen2; ZUJnbSaXY0WH = ZUJnbSaXY0WH +1)
        if (ZjIMHuCfQFX[ZUJnbSaXY0WH] >= 'A' && ZjIMHuCfQFX[ZUJnbSaXY0WH] <= 'Z')
            ZjIMHuCfQFX[ZUJnbSaXY0WH] = ZjIMHuCfQFX[ZUJnbSaXY0WH] + 'a' - 'A';
    for (int ZUJnbSaXY0WH = 0;
    ZUJnbSaXY0WH < nlen2; ZUJnbSaXY0WH++)
        k = strcmp (ClGEMIF, ZjIMHuCfQFX);
    cout << xKgUEH[k + 1];
    return 0;
}

