int main () {
    char *TDyoMEO;
    char BYiNgFhsT [(1084 - 828)] = {(489 - 489)};
    char L145hesJCi [(1186 - 930)] = {(775 - 775)};
    char glvzOLdR [(546 - 290)] = {0};
    char *ccJysuwjki;
    cin >> BYiNgFhsT >> L145hesJCi >> glvzOLdR;
    TDyoMEO = strstr (BYiNgFhsT, L145hesJCi);
    ccJysuwjki = BYiNgFhsT;
    if (!(NULL != TDyoMEO))
        cout << BYiNgFhsT;
    else {
        for (; ccJysuwjki != TDyoMEO;) {
            cout << *ccJysuwjki;
            ccJysuwjki++;
        }
        cout << glvzOLdR;
        ccJysuwjki = ccJysuwjki + strlen (glvzOLdR);
        for (; *ccJysuwjki != '\0';) {
            cout << *ccJysuwjki;
            ccJysuwjki++;
        }
    }
    return 0;
}

