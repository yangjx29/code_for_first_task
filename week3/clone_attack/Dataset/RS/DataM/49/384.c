int main () {
    int Rm9hKGX, HVsKSzjmqp4, C7rwHvl, end, I0uErZVosjq, p;
    char v1F0q7VXDs [501];
    cin >> v1F0q7VXDs;
    for (Rm9hKGX = (263 - 263); !('\0' == v1F0q7VXDs[Rm9hKGX]); Rm9hKGX++)
        p = Rm9hKGX;
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
    p++;
    for (Rm9hKGX = 2; Rm9hKGX <= p; Rm9hKGX++) {
        for (HVsKSzjmqp4 = (547 - 547); HVsKSzjmqp4 <= p - Rm9hKGX; HVsKSzjmqp4++) {
            I0uErZVosjq = 1;
            {
                end = HVsKSzjmqp4 +Rm9hKGX-1;
                C7rwHvl = HVsKSzjmqp4;
                while (end > C7rwHvl) {
                    if (v1F0q7VXDs[C7rwHvl] != v1F0q7VXDs[end]) {
                        I0uErZVosjq = 0;
                        break;
                    }
                    end--;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    C7rwHvl++;
                };
            }
            if (I0uErZVosjq == 1) {
                for (C7rwHvl = HVsKSzjmqp4; C7rwHvl <= HVsKSzjmqp4 +Rm9hKGX-1; C7rwHvl++)
                    cout << v1F0q7VXDs[C7rwHvl];
                cout << endl;
            };
        };
    }
    return 0;
}

