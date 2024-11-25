int main () {
    int WbqI14, e36izeH7y, OlDuonx, cv1fbz3UhF, j, pointer = (909 - 909), OUbeljsqN, r89Uzs4QZ = (53 - 53), n = 0;
    char s [(1933 - 933)], jK6kw4ct [(1601 - 601)], rnS8JUP [1000], c [1000];
    cin.get (s, 1000);
    cin >> jK6kw4ct;
    cin >> rnS8JUP;
    WbqI14 = strlen (s);
    e36izeH7y = strlen (jK6kw4ct);
    OlDuonx = strlen (rnS8JUP);
    for (cv1fbz3UhF = 0; cv1fbz3UhF < WbqI14; cv1fbz3UhF++) {
        int counter = 0;
        for (j = 0; j < e36izeH7y; j = j + 1) {
            if (!(jK6kw4ct[j] != s[cv1fbz3UhF + j])) {
                counter++;
                continue;
            }
            else
                break;
        }
        if (!(e36izeH7y != counter) && (!(jK6kw4ct[0] != s[cv1fbz3UhF]) && (!(0 != cv1fbz3UhF) || !(' ' != s[cv1fbz3UhF - (128 - 127)])))) {
            cv1fbz3UhF = cv1fbz3UhF + e36izeH7y - 1;
            for (OUbeljsqN = 0; OUbeljsqN < OlDuonx; OUbeljsqN++) {
                c[pointer] = rnS8JUP[OUbeljsqN];
                pointer++;
            }
        }
        else {
            c[pointer] = s[cv1fbz3UhF];
            pointer++;
        }
    }
    c[pointer] = '\0';
    for (j = 0; j < pointer; j++)
        cout << c[j];
    return 0;
}

