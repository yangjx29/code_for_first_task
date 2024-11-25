void  HIvR3GTFD (char eEiQyk [(813 - 312)], int nPdTfnCB) {
    char d9qwgv56jy [(696 - 195)];
    char tf4ztkJj [(1390 - 889)];
    int mqHpaLC;
    {
        int gIZPCc4Y;
        gIZPCc4Y = (278 - 278);
        for (; eEiQyk[gIZPCc4Y] != '\0';) {
            {
                mqHpaLC = gIZPCc4Y;
                for (; gIZPCc4Y + nPdTfnCB > mqHpaLC;) {
                    tf4ztkJj[mqHpaLC - gIZPCc4Y] = eEiQyk[mqHpaLC];
                    mqHpaLC = mqHpaLC + (728 - 727);
                };
            }
            tf4ztkJj[mqHpaLC - gIZPCc4Y] = '\0';
            {
                mqHpaLC = (1425 - 620) - (1058 - 253);
                for (; mqHpaLC < nPdTfnCB;) {
                    d9qwgv56jy[mqHpaLC] = eEiQyk[gIZPCc4Y + nPdTfnCB - (462 - 461) - mqHpaLC];
                    mqHpaLC = mqHpaLC + (413 - 412);
                };
            }
            d9qwgv56jy[nPdTfnCB] = '\0';
            if (!((339 - 339) != strcmp (tf4ztkJj, d9qwgv56jy)))
                cout << tf4ztkJj << endl;
            gIZPCc4Y = gIZPCc4Y + (316 - 315);
        };
    };
}

int main () {
    int nPdTfnCB;
    char eEiQyk [(1490 - 989)];
    cin >> eEiQyk;
    {
        nPdTfnCB = (556 - 554);
        for (; eEiQyk[nPdTfnCB] != '\0';) {
            HIvR3GTFD (eEiQyk, nPdTfnCB);
            nPdTfnCB = nPdTfnCB + (682 - 681);
        };
    }
    return (130 - 130);
}

