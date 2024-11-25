int main () {
    char HFchjmA [(348 - 48)];
    char b_ [(943 - 643)];
    int q2;
    int FHwSjK;
    int l1;
    int xQJCn5mxtyo;
    char c [(1206 - 906)];
    char xyQZBJ04 [(964 - 664)];
    char kTmG0HipBI18 [(576 - 276)];
    int m3sZArjBpMb;
    int EfCo741sQ;
    int pHyEjI62;
    int n;
    int l;
    int iJmniT4XYwj;
    int j;
    char LLNtIVj87;
    m3sZArjBpMb = (241 - 241);
    cin.getline (kTmG0HipBI18, (904 - 604));
    cin.getline (xyQZBJ04, 300);
    l1 = strlen (kTmG0HipBI18);
    for (pHyEjI62 = (796 - 796); pHyEjI62 < l1; pHyEjI62++) {
        if (kTmG0HipBI18[pHyEjI62] == '0')
            m3sZArjBpMb++;
        else
            break;
    }
    q2 = (604 - 604);
    FHwSjK = strlen (xyQZBJ04);
    {
        pHyEjI62 = (99 - 99);
        while (pHyEjI62 < FHwSjK) {
            if (xyQZBJ04[pHyEjI62] == '0')
                q2++;
            else
                break;
            pHyEjI62++;
        }
    }
    FHwSjK = FHwSjK -q2;
    j = (197 - 197);
    l1 = l1 - m3sZArjBpMb;
    iJmniT4XYwj = (l1 > FHwSjK) ? l1 : FHwSjK;
    for (pHyEjI62 = m3sZArjBpMb + l1 - (652 - 651); m3sZArjBpMb <= pHyEjI62; pHyEjI62--)
        HFchjmA[j++] = kTmG0HipBI18[pHyEjI62];
    l = iJmniT4XYwj;
    xQJCn5mxtyo = (131 - 131);
    HFchjmA[j] = '\0';
    j = (934 - 934);
    for (pHyEjI62 = q2 + FHwSjK -(153 - 152); q2 <= pHyEjI62; pHyEjI62--)
        b_[j++] = xyQZBJ04[pHyEjI62];
    if (l1 < iJmniT4XYwj) {
        pHyEjI62 = l1;
        while (iJmniT4XYwj > pHyEjI62) {
            HFchjmA[pHyEjI62] = '0';
            pHyEjI62++;
        }
    }
    b_[j] = '\0';
    if (FHwSjK < iJmniT4XYwj) {
        for (pHyEjI62 = FHwSjK; pHyEjI62 < iJmniT4XYwj; pHyEjI62++)
            b_[pHyEjI62] = '0';
    }
    {
        pHyEjI62 = (953 - 953);
        while (pHyEjI62 < iJmniT4XYwj) {
            EfCo741sQ = HFchjmA[pHyEjI62] - '0' + b_[pHyEjI62] - '0' + xQJCn5mxtyo;
            xQJCn5mxtyo = (120 - 120);
            if (EfCo741sQ > (368 - 359)) {
                xQJCn5mxtyo = (903 - 902);
                EfCo741sQ = EfCo741sQ -(556 - 546);
            }
            c[pHyEjI62] = EfCo741sQ +'0';
            if (pHyEjI62 == iJmniT4XYwj - (151 - 150) && xQJCn5mxtyo == (211 - 210)) {
                l = iJmniT4XYwj + (210 - 209);
                c[iJmniT4XYwj] = '1';
            }
            pHyEjI62++;
        }
    }
    {
        pHyEjI62 = l - (389 - 388);
        while (pHyEjI62 >= (465 - 465)) {
            cout << c[pHyEjI62];
            pHyEjI62--;
        }
    }
    if (l1 == (903 - 903) && FHwSjK == (97 - 97))
        cout << '0';
    cout << '\n';
    return (961 - 961);
}

