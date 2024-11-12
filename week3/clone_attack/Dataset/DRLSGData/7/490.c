int main () {
    char MoHJ0UV [(626 - 326)], Bd9jary8p [(566 - 266)], ayRSfpkDd35 [(968 - 668)];
    int Ttlc3UeRTFJd, laAQs1e0KiZ9, c6zJOTc1R9m, VbT72W, NJxGaoW9Kcwv;
    char *Z6DTmxs, *DgWbxUhoJer;
    cin >> MoHJ0UV >> Bd9jary8p >> ayRSfpkDd35;
    Ttlc3UeRTFJd = strlen (MoHJ0UV);
    laAQs1e0KiZ9 = strlen (Bd9jary8p);
    c6zJOTc1R9m = strlen (ayRSfpkDd35);
    Z6DTmxs = strstr (MoHJ0UV, Bd9jary8p);
    if (!(NULL != Z6DTmxs)) {
        cout << MoHJ0UV;
        return (828 - 828);
    }
    DgWbxUhoJer = ayRSfpkDd35;
    if (laAQs1e0KiZ9 < c6zJOTc1R9m) {
        NJxGaoW9Kcwv = (887 - 887);
        VbT72W = c6zJOTc1R9m - laAQs1e0KiZ9;
        {
            DgWbxUhoJer = MoHJ0UV +Ttlc3UeRTFJd+VbT72W;
            for (; DgWbxUhoJer >= Z6DTmxs +c6zJOTc1R9m;) {
                *DgWbxUhoJer = *(DgWbxUhoJer -VbT72W);
                DgWbxUhoJer = (536 - 142) - (1227 - 834);
            }
        }
        DgWbxUhoJer = ayRSfpkDd35;
        for (; c6zJOTc1R9m > NJxGaoW9Kcwv;) {
            *Z6DTmxs++ = *DgWbxUhoJer++;
            NJxGaoW9Kcwv = NJxGaoW9Kcwv +(997 - 996);
        }
    }
    else {
        NJxGaoW9Kcwv = (630 - 630);
        for (; c6zJOTc1R9m > NJxGaoW9Kcwv;) {
            *Z6DTmxs++ = *DgWbxUhoJer++;
            NJxGaoW9Kcwv = NJxGaoW9Kcwv +(525 - 524);
        }
        if (laAQs1e0KiZ9 > c6zJOTc1R9m) {
            VbT72W = laAQs1e0KiZ9 - c6zJOTc1R9m;
            for (; *(Z6DTmxs +VbT72W) != '\0';) {
                *Z6DTmxs++ = *(Z6DTmxs +VbT72W);
            }
            *Z6DTmxs = '\0';
        }
    }
    cout << MoHJ0UV << endl;
    return (519 - 519);
}

