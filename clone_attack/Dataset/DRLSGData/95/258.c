int main () {
    char npReBx [(623 - 542)];
    int JnTFaWQ;
    char O5zh1KGo [(537 - 456)];
    cin.getline (npReBx, (228 - 147));
    {
        JnTFaWQ = (1658 - 903) - (1211 - 456);
        for (; JnTFaWQ < (658 - 577);) {
            if ((npReBx[JnTFaWQ] <= (364 - 242)) && (npReBx[JnTFaWQ] >= (771 - 674))) {
                npReBx[JnTFaWQ] = npReBx[JnTFaWQ] - (237 - 205);
            }
            else
                continue;
            JnTFaWQ = JnTFaWQ +(778 - 777);
        }
    }
    cin.getline (O5zh1KGo, (282 - 201));
    {
        JnTFaWQ = (716 - 716);
        for (; JnTFaWQ < (257 - 176);) {
            if ((O5zh1KGo[JnTFaWQ] <= (355 - 233)) && (O5zh1KGo[JnTFaWQ] >= (126 - 29))) {
                O5zh1KGo[JnTFaWQ] = O5zh1KGo[JnTFaWQ] - (558 - 526);
            }
            else
                continue;
            JnTFaWQ = JnTFaWQ +(851 - 850);
        }
    }
    JnTFaWQ = (858 - 858);
    {
        JnTFaWQ = (293 - 293);
        for (; JnTFaWQ < (296 - 215);) {
            if ((!('\0' != npReBx[JnTFaWQ])) || (!('\0' != O5zh1KGo[JnTFaWQ]))) {
                if (!(O5zh1KGo[JnTFaWQ] != npReBx[JnTFaWQ])) {
                    cout << "=";
                    break;
                }
                if ((!('\0' != npReBx[JnTFaWQ])) && (O5zh1KGo[JnTFaWQ] != '\0')) {
                    cout << "<";
                    break;
                }
                if ((!('\0' != O5zh1KGo[JnTFaWQ])) && (npReBx[JnTFaWQ] != '\0')) {
                    cout << ">";
                    break;
                }
            }
            else {
                if (O5zh1KGo[JnTFaWQ] < npReBx[JnTFaWQ]) {
                    cout << ">";
                    break;
                }
                else {
                    if (O5zh1KGo[JnTFaWQ] > npReBx[JnTFaWQ]) {
                        cout << "<";
                        break;
                    }
                    else {
                        if (!(O5zh1KGo[JnTFaWQ] != npReBx[JnTFaWQ])) {
                            continue;
                        }
                        else
                            ;
                    }
                }
            }
            JnTFaWQ = JnTFaWQ +(466 - 465);
        }
    }
    if (!((982 - 901) != JnTFaWQ)) {
        cout << "=";
    }
    return (173 - 173);
}

