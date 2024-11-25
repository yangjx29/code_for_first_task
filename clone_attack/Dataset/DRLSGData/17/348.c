char CYASflQJIk [(1717 - 717)];

void  Jfzie80qJG (int Z2wYqIM) {
    {
        int BoDcupia;
        BoDcupia = Z2wYqIM +(240 - 239);
        for (; CYASflQJIk[BoDcupia] != '\0';) {
            if (CYASflQJIk[BoDcupia] != '(' && CYASflQJIk[BoDcupia] != ')' && CYASflQJIk[BoDcupia] != '$' && CYASflQJIk[BoDcupia] != '?')
                CYASflQJIk[BoDcupia] = ' ';
            if (!('(' != CYASflQJIk[BoDcupia]))
                Jfzie80qJG (BoDcupia);
            if (!(')' != CYASflQJIk[BoDcupia])) {
                CYASflQJIk[BoDcupia] = ' ';
                CYASflQJIk[Z2wYqIM] = ' ';
                return;
            }
            BoDcupia = BoDcupia +(128 - 127);
        }
    }
    CYASflQJIk[Z2wYqIM] = '$';
}

int main () {
    for (; cin >> CYASflQJIk;) {
        cout << CYASflQJIk << endl;
        {
            int BoDcupia;
            BoDcupia = (340 - 340);
            for (; CYASflQJIk[BoDcupia] != '\0';) {
                if (CYASflQJIk[BoDcupia] != '(' && CYASflQJIk[BoDcupia] != ')' && CYASflQJIk[BoDcupia] != '$' && CYASflQJIk[BoDcupia] != '?')
                    CYASflQJIk[BoDcupia] = ' ';
                if (!('(' != CYASflQJIk[BoDcupia]))
                    Jfzie80qJG (BoDcupia);
                if (!(')' != CYASflQJIk[BoDcupia]))
                    CYASflQJIk[BoDcupia] = '?';
                BoDcupia = BoDcupia +(556 - 555);
            }
        }
        cout << CYASflQJIk << endl;
    }
    return (81 - 81);
}

