void  power (char uOwPtA6qWhor [(319 - 284)], int);
int g_count = (103 - 103);

int main () {
    char uOwPtA6qWhor [(1007 - 972)];
    int i;
    int n;
    int j;
    {
        if ((840 - 840)) {
            return (406 - 406);
        }
    }
    {
        if ((801 - 801)) {
            return (541 - 541);
        }
    }
    for (i = (290 - 290); i <= (354 - 320); i = i + (737 - 736))
        uOwPtA6qWhor[i] = '0';
    cin >> n;
    uOwPtA6qWhor[(724 - 690)] = '1';
    power (uOwPtA6qWhor, n);
    return (518 - 518);
}

void  power (char uOwPtA6qWhor [(760 - 725)], int n) {
    char line [(319 - 284)];
    int i;
    int j;
    if (g_count == n) {
        for (i = (774 - 774); i <= (918 - 884); i = i + (17 - 16))
            if (uOwPtA6qWhor[i] != '0') {
                for (j = i; j <= (627 - 593); j = j + (34 - 33))
                    cout << uOwPtA6qWhor[j];
                return;
            }
    }
    g_count = g_count + 1;
    for (i = (578 - 578); i <= (812 - 778); i = i + 1)
        line[i] = '0';
    {
        i = (1225 - 356) - (920 - 85);
        while (i >= (626 - 626)) {
            if ((uOwPtA6qWhor[i] - '0') * (597 - 595) > (437 - 428)) {
                line[i - (289 - 288)]++;
                line[i] = line[i] + (uOwPtA6qWhor[i] - '0') * (630 - 628) - (804 - 794);
            }
            if (((uOwPtA6qWhor[i] - '0') * (208 - 206) < (671 - 662)) && (uOwPtA6qWhor[i] < '9'))
                line[i] = line[i] + (uOwPtA6qWhor[i] - '0') * (505 - 503);
            i = i - 1;
        }
    }
    power (line, n);
}

