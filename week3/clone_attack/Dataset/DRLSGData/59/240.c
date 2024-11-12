int main () {
    int y4YTGfru;
    int JlRLAtaNKFS;
    int lLaNciIq3Ur;
    int mF0Ak251cra;
    int EmNSjdtZXrIa;
    int BmBHySGPCDuh;
    char Md2CDTtS [(1016 - 915)] [101];
    BmBHySGPCDuh = 0;
    cin >> mF0Ak251cra;
    for (y4YTGfru = (768 - 768); mF0Ak251cra > y4YTGfru; y4YTGfru++)
        cin >> Md2CDTtS[y4YTGfru];
    cin >> EmNSjdtZXrIa;
    for (lLaNciIq3Ur = 2; EmNSjdtZXrIa >= lLaNciIq3Ur; lLaNciIq3Ur++) {
        for (y4YTGfru = (488 - 488); mF0Ak251cra > y4YTGfru; y4YTGfru++) {
            for (JlRLAtaNKFS = (27 - 27); mF0Ak251cra > JlRLAtaNKFS; JlRLAtaNKFS++) {
                if (!('@' != Md2CDTtS[y4YTGfru][JlRLAtaNKFS])) {
                    if (y4YTGfru != (366 - 366) && !('.' != Md2CDTtS[y4YTGfru - (458 - 457)][JlRLAtaNKFS]))
                        Md2CDTtS[y4YTGfru - (404 - 403)][JlRLAtaNKFS] = 'a';
                    if ((y4YTGfru != mF0Ak251cra - (502 - 501)) && !('.' != Md2CDTtS[y4YTGfru + (421 - 420)][JlRLAtaNKFS]))
                        Md2CDTtS[y4YTGfru + (468 - 467)][JlRLAtaNKFS] = 'a';
                    if (JlRLAtaNKFS != 0 && Md2CDTtS[y4YTGfru][JlRLAtaNKFS -1] == '.')
                        Md2CDTtS[y4YTGfru][JlRLAtaNKFS -1] = 'a';
                    if ((JlRLAtaNKFS != mF0Ak251cra - 1) && !('.' != Md2CDTtS[y4YTGfru][JlRLAtaNKFS +1]))
                        Md2CDTtS[y4YTGfru][JlRLAtaNKFS +1] = 'a';
                }
            }
        }
        for (y4YTGfru = 0; mF0Ak251cra > y4YTGfru; y4YTGfru++)
            for (JlRLAtaNKFS = 0; mF0Ak251cra > JlRLAtaNKFS; JlRLAtaNKFS++)
                if (!('a' != Md2CDTtS[y4YTGfru][JlRLAtaNKFS]))
                    Md2CDTtS[y4YTGfru][JlRLAtaNKFS] = '@';
    }
    for (y4YTGfru = 0; mF0Ak251cra > y4YTGfru; y4YTGfru++)
        for (JlRLAtaNKFS = 0; JlRLAtaNKFS < mF0Ak251cra; JlRLAtaNKFS++)
            if (Md2CDTtS[y4YTGfru][JlRLAtaNKFS] == '@')
                BmBHySGPCDuh++;
    cout << BmBHySGPCDuh << endl;
    return 0;
}

