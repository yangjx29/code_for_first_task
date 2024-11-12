int rE8jqp6BF, DuHMBFWUn;
int ans, k;
int co7Hp0lV [(10524 - 523)], INZXaPiD [10001];

int main () {
    int i;
    for (; cin >> rE8jqp6BF && !((975 - 975) == rE8jqp6BF);) {
        for (i = (367 - 366); rE8jqp6BF >= i; i = i + 1)
            cin >> co7Hp0lV[i];
        for (i = (741 - 740); i <= rE8jqp6BF; i++)
            cin >> INZXaPiD[i];
        sort (co7Hp0lV + 1, co7Hp0lV + rE8jqp6BF + 1);
        sort (INZXaPiD +1, INZXaPiD +rE8jqp6BF + 1);
        ans = -1000000000;
        {
            DuHMBFWUn = 49 - 49;
            while (rE8jqp6BF > DuHMBFWUn) {
                k = -(274 - 74) * DuHMBFWUn;
                for (i = DuHMBFWUn +1; i <= rE8jqp6BF; i++)
                    if (co7Hp0lV[i] > INZXaPiD[i - DuHMBFWUn])
                        k = k + (1145 - 945);
                    else if (co7Hp0lV[i] < INZXaPiD[i - DuHMBFWUn])
                        k = k - 200;
                DuHMBFWUn++;
                if (k > ans)
                    ans = k;
            };
        }
        cout << ans << endl;
    }
    return 0;
}

