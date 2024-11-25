int main () {
    int k, XiyMtcVGdo, i, T1jWlL7KoQ, X80aVUi5kf, JgeOEz;
    char YhMC8q [(1042 - 941)] [101], gDUWao1Qc6Be;
    JgeOEz = 0;
    scanf ("%d", &XiyMtcVGdo);
    scanf ("%c", &gDUWao1Qc6Be);
    for (i = (532 - 531); XiyMtcVGdo >= i; i = i + 1)
        for (T1jWlL7KoQ = (798 - 797); XiyMtcVGdo >= T1jWlL7KoQ; T1jWlL7KoQ++) {
            scanf ("%c", &YhMC8q[i][T1jWlL7KoQ]);
            if (T1jWlL7KoQ == XiyMtcVGdo)
                scanf ("%c", &gDUWao1Qc6Be);
        }
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    scanf ("%d", &X80aVUi5kf);
    for (k = 2; X80aVUi5kf >= k; k++) {
        for (i = (369 - 368); i <= XiyMtcVGdo; i++)
            for (T1jWlL7KoQ = (118 - 117); XiyMtcVGdo >= T1jWlL7KoQ; T1jWlL7KoQ++)
                if (YhMC8q[i][T1jWlL7KoQ] == '@') {
                    if ((i - (258 - 257) != (344 - 344)) && (YhMC8q[i - (899 - 898)][T1jWlL7KoQ] == '.'))
                        YhMC8q[i - (252 - 251)][T1jWlL7KoQ] = ',';
                    if ((i + (817 - 816) != XiyMtcVGdo +(726 - 725)) && (YhMC8q[i + 1][T1jWlL7KoQ] == '.'))
                        YhMC8q[i + 1][T1jWlL7KoQ] = ',';
                    if ((T1jWlL7KoQ -1 != (386 - 386)) && (YhMC8q[i][T1jWlL7KoQ -1] == '.'))
                        YhMC8q[i][T1jWlL7KoQ -1] = ',';
                    if ((T1jWlL7KoQ +1 != 0) && (YhMC8q[i][T1jWlL7KoQ +1] == '.'))
                        YhMC8q[i][T1jWlL7KoQ +1] = ',';
                }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        }
        for (i = 1; i <= XiyMtcVGdo; i++)
            for (T1jWlL7KoQ = 1; T1jWlL7KoQ <= XiyMtcVGdo; T1jWlL7KoQ++)
                if (YhMC8q[i][T1jWlL7KoQ] == ',')
                    YhMC8q[i][T1jWlL7KoQ] = '@';
    }
    for (i = 1; i <= XiyMtcVGdo; i++)
        for (T1jWlL7KoQ = 1; T1jWlL7KoQ <= XiyMtcVGdo; T1jWlL7KoQ++)
            if (YhMC8q[i][T1jWlL7KoQ] == '@')
                JgeOEz = JgeOEz +1;
    printf ("%d", JgeOEz);
    return 0;
}

