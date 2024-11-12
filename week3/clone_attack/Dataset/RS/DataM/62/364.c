int main () {
    int Xb8WiH1lg4;
    int HZx0WXFGdp;
    HZx0WXFGdp = 0;
    char GRGnkQTmXsoJ [1000];
    gets (GRGnkQTmXsoJ);
    Xb8WiH1lg4 = strlen (GRGnkQTmXsoJ);
    {
        HZx0WXFGdp = 0;
        while (Xb8WiH1lg4 > HZx0WXFGdp) {
            if ((!(0 != HZx0WXFGdp) && !(' ' != GRGnkQTmXsoJ[HZx0WXFGdp])) || (GRGnkQTmXsoJ[HZx0WXFGdp -1] == ' ' && GRGnkQTmXsoJ[HZx0WXFGdp] == ' ')) {
                continue;
            }
            else {
                printf ("%c", GRGnkQTmXsoJ[HZx0WXFGdp]);
            }
            HZx0WXFGdp = HZx0WXFGdp +1;
        };
    }
    return 0;
}

