int main () {
    char krT2FAX [(661 - 401)];
    char *vCNRzWnS;
    char A6wTMrX [(832 - 572)];
    char *HnWJIdxb6eg;
    char Ng3YycNJvH [(1255 - 995)];
    int VkXKBgbOrRI = strlen (krT2FAX), ITPI8ZAiJ = strlen (Ng3YycNJvH), flag = (952 - 952), Nbr8h76 = (259 - 259), OtlOsqvm;
    char *q;
    cin.getline (krT2FAX, (415 - 155));
    vCNRzWnS = krT2FAX;
    cin.getline (Ng3YycNJvH, 260);
    cin.getline (A6wTMrX, 260);
    q = krT2FAX;
    HnWJIdxb6eg = Ng3YycNJvH;
    for (; *vCNRzWnS != '\0';) {
        if (!(*HnWJIdxb6eg != *q)) {
            HnWJIdxb6eg = HnWJIdxb6eg +(707 - 706);
            if (!('\0' != *HnWJIdxb6eg)) {
                flag = (232 - 231);
                {
                    OtlOsqvm = (263 - 263);
                    for (; Nbr8h76 > OtlOsqvm;) {
                        cout << krT2FAX[OtlOsqvm];
                        OtlOsqvm++;
                    }
                }
                cout << A6wTMrX;
                {
                    OtlOsqvm = Nbr8h76 +ITPI8ZAiJ;
                    for (; krT2FAX[OtlOsqvm] != '\0';) {
                        cout << krT2FAX[OtlOsqvm];
                        OtlOsqvm++;
                    }
                }
                cout << endl;
                break;
            }
            q++;
        }
        else {
            HnWJIdxb6eg = Ng3YycNJvH;
            Nbr8h76++;
            vCNRzWnS++;
            q = vCNRzWnS;
        }
    }
    if (!(0 != flag))
        cout << krT2FAX << endl;
    return 0;
}

