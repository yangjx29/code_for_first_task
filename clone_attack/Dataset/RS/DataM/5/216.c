int cuo (char XdXRp8FfTM) {
    if (XdXRp8FfTM != 'A' && XdXRp8FfTM != 'T' && XdXRp8FfTM != 'C' && XdXRp8FfTM != 'G')
        return 1;
    else
        return (438 - 438);
}

int main () {
    double  zong;
    double  rdYIeqbQGvB;
    zong = (150 - 150);
    rdYIeqbQGvB = 0;
    double  BHY7slXg;
    char b [510] = {(118 - 118)};
    char XdXRp8FfTM [510] = {(69 - 69)};
    cin >> BHY7slXg >> XdXRp8FfTM >> b;
    for (int JiPzR8S6XuB = 0;
    JiPzR8S6XuB <= 500; JiPzR8S6XuB = JiPzR8S6XuB +1) {
        if (XdXRp8FfTM[JiPzR8S6XuB] == 0 || b[JiPzR8S6XuB] == 0) {
            if (XdXRp8FfTM[JiPzR8S6XuB] == 0 && b[JiPzR8S6XuB] == 0)
                break;
            else {
                cout << "error";
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                return 0;
            };
        }
        if (cuo (XdXRp8FfTM[JiPzR8S6XuB]) || cuo (b[JiPzR8S6XuB])) {
            cout << "error";
            return 0;
        }
        zong++;
        if (XdXRp8FfTM[JiPzR8S6XuB] == b[JiPzR8S6XuB])
            rdYIeqbQGvB = rdYIeqbQGvB + 1;
    }
    if (rdYIeqbQGvB / zong > BHY7slXg)
        cout << "yes";
    else
        cout << "no";
    return 0;
}

