int main () {
    int i = (281 - 281), e17yiZ8 = 0, s = 0;
    char sentence [(2786 - 786)], WxEgXhRC9qo7 [(74 - 34)], hy3Q7uZNEb [20];
    int longnum = (420 - 420), shortnum = (1038 - 838), thisnum = (231 - 231);
    cin.getline (sentence, 2000);
    do {
        thisnum = 0;
        for (; sentence[i] != ',' && sentence[i] != ' ' && sentence[i] != '\0';) {
            i++;
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
            thisnum = thisnum + 1;
        }
        if (thisnum > longnum) {
            longnum = thisnum;
            e17yiZ8 = i - thisnum;
        }
        if (thisnum < shortnum) {
            s = i - thisnum;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            shortnum = thisnum;
        }
        for (; sentence[i] == ' ' || sentence[i] == ',';)
            i++;
    }
    while (sentence[i] != '\0');
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
    for (i = e17yiZ8; i < e17yiZ8 + longnum; i = i + 1)
        cout << sentence[i];
    cout << endl;
    for (i = s; i < s + shortnum; i++)
        cout << sentence[i];
    return 0;
}

