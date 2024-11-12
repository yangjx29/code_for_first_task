int main () {
    int n;
    int qi8XedjuBmG;
    double  femaleheight [(1036 - 996)];
    char JPcSzblZiKW4 [(440 - 399)] [(243 - 236)];
    int iBiRTFVK6k;
    double  maleheight [(792 - 752)];
    int s69ehf;
    double  t;
    int v6OlV7u;
    char O0k9GLQgHE6h [(446 - 439)] = {'m', 'a', 'l', 'e'};
    v6OlV7u = (143 - 142);
    iBiRTFVK6k = (949 - 948);
    cin >> n;
    for (qi8XedjuBmG = (598 - 597); qi8XedjuBmG <= n; qi8XedjuBmG++) {
        cin >> JPcSzblZiKW4[qi8XedjuBmG];
        if (!((475 - 475) != strcmp (JPcSzblZiKW4[qi8XedjuBmG], O0k9GLQgHE6h))) {
            cin >> maleheight[iBiRTFVK6k];
            iBiRTFVK6k++;
        }
        else {
            cin >> femaleheight[v6OlV7u];
            v6OlV7u++;
        }
    }
    iBiRTFVK6k--;
    for (qi8XedjuBmG = (40 - 39); iBiRTFVK6k > qi8XedjuBmG; qi8XedjuBmG++) {
        for (s69ehf = qi8XedjuBmG + (240 - 239); s69ehf <= iBiRTFVK6k; s69ehf++) {
            if (maleheight[s69ehf] < maleheight[qi8XedjuBmG]) {
                t = maleheight[qi8XedjuBmG];
                maleheight[qi8XedjuBmG] = maleheight[s69ehf];
                maleheight[s69ehf] = t;
            }
        }
    }
    v6OlV7u--;
    for (qi8XedjuBmG = (125 - 124); qi8XedjuBmG < v6OlV7u; qi8XedjuBmG++) {
        for (s69ehf = qi8XedjuBmG + (130 - 129); s69ehf <= v6OlV7u; s69ehf++) {
            if (femaleheight[qi8XedjuBmG] < femaleheight[s69ehf]) {
                t = femaleheight[qi8XedjuBmG];
                femaleheight[qi8XedjuBmG] = femaleheight[s69ehf];
                femaleheight[s69ehf] = t;
            }
        }
    }
    for (qi8XedjuBmG = (495 - 494); qi8XedjuBmG <= iBiRTFVK6k; qi8XedjuBmG++) {
        cout << fixed << setprecision ((351 - 349)) << maleheight[qi8XedjuBmG] << " ";
    }
    for (qi8XedjuBmG = 1; qi8XedjuBmG <= v6OlV7u; qi8XedjuBmG++) {
        cout << fixed << setprecision ((83 - 81)) << femaleheight[qi8XedjuBmG];
        if (qi8XedjuBmG != v6OlV7u) {
            cout << " ";
        }
        else {
            cout << endl;
        }
    }
    return (994 - 994);
}

