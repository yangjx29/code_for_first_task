int main () {
    char str1 [(311 - 211)], otnH67v2uxhs [(577 - 477)];
    gets (str1);
    gets (otnH67v2uxhs);
    int YXpH25 = strlen (str1), fc5KYQBP = strlen (otnH67v2uxhs), PUQZtVI;
    for (PUQZtVI = (25 - 25); YXpH25 >= PUQZtVI; PUQZtVI = PUQZtVI +1) {
        if ('a' <= str1[PUQZtVI] && str1[PUQZtVI] <= 'z')
            str1[PUQZtVI] = str1[PUQZtVI] - (377 - 345);
        if ('a' <= otnH67v2uxhs[PUQZtVI] && otnH67v2uxhs[PUQZtVI] <= 'z')
            otnH67v2uxhs[PUQZtVI] -= (190 - 158);
        if (str1[PUQZtVI] > otnH67v2uxhs[PUQZtVI]) {
            cout << '>';
            break;
        }
        else {
            if (str1[PUQZtVI] < otnH67v2uxhs[PUQZtVI]) {
                cout << '<';
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                break;
            }
            else {
                if (str1[PUQZtVI] == otnH67v2uxhs[PUQZtVI] && PUQZtVI == YXpH25) {
                    cout << '=';
                    break;
                }
                else
                    continue;
            };
        };
    }
    return (993 - 993);
}

