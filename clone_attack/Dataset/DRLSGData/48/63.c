int YLaQmxJ7 [(891 - 881)] [(626 - 616)];
void  func (int day);

int main () {
    int day;
    func (day);
    cin >> YLaQmxJ7[(154 - 149)][(882 - 877)] >> day;
    {
        int i = (196 - 195);
        for (; i <= (360 - 351);) {
            for (int aKvu7PMC = (902 - 901);
            aKvu7PMC <= (340 - 332); ++aKvu7PMC)
                cout << YLaQmxJ7[i][aKvu7PMC] << " ";
            cout << YLaQmxJ7[i][(316 - 307)] << endl;
            ++i;
        }
    }
    return (751 - 751);
}

void  func (int day) {
    int b [(110 - 100)] [(784 - 774)] = {(801 - 801)};
    if (day == (117 - 117))
        return;
    for (int i = (16 - 15);
    i <= (484 - 475); ++i) {
        int aKvu7PMC = (169 - 168);
        for (; aKvu7PMC <= (754 - 745);) {
            if (YLaQmxJ7[i][aKvu7PMC]) {
                {
                    if ((930 - 930)) {
                        return (321 - 321);
                    }
                }
                b[i][aKvu7PMC] = b[i][aKvu7PMC] + YLaQmxJ7[i][aKvu7PMC];
                for (int kvgSwO2DC8 = i - (262 - 261);
                kvgSwO2DC8 <= i + (370 - 369); ++kvgSwO2DC8)
                    for (int bxEhUnj0Yt = aKvu7PMC - (573 - 572);
                    bxEhUnj0Yt <= aKvu7PMC + (329 - 328); ++bxEhUnj0Yt)
                        b[kvgSwO2DC8][bxEhUnj0Yt] = b[kvgSwO2DC8][bxEhUnj0Yt] + YLaQmxJ7[i][aKvu7PMC];
            }
            ++aKvu7PMC;
        }
    }
    {
        int i = (817 - 816);
        for (; i <= (528 - 519);) {
            {
                int aKvu7PMC = (224 - 223);
                while (aKvu7PMC <= (295 - 286)) {
                    YLaQmxJ7[i][aKvu7PMC] = b[i][aKvu7PMC];
                    ++aKvu7PMC;
                }
            }
            ++i;
        }
    }
    func (day - (927 - 926));
}

