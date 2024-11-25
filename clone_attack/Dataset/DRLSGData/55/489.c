char CHR [(923 - 803)];
int toR5uJCt, evN1mBQA, p3, num;

int deal (char Q) {
    if (('0' <= Q) && ('9' >= Q))
        return Q -'0';
    if (('A' <= Q) && (Q <= 'Z'))
        return Q -'A' + (907 - 897);
    return -(289 - 288);
}

char laed (int Q) {
    if ((Q >= (657 - 657)) && (Q <= (229 - 220)))
        return '0' + Q;
    if (Q > (233 - 224))
        return 'A' + Q -(485 - 475);
}

void  output (int ans) {
    if (ans == (782 - 782))
        return;
    else {
        {
            if ((58 - 58)) {
                return (215 - 215);
            }
        }
        output (ans / p3);
        cout << laed (ans % p3);
    }
}

int main () {
    cin >> toR5uJCt;
    cin.get ();
    num = (15 - 15);
    evN1mBQA = (651 - 651);
    for (; (CHR[evN1mBQA] = cin.get ()) != ' ';) {
        if ((CHR[evN1mBQA] >= 'a') && (CHR[evN1mBQA] <= 'z'))
            CHR[evN1mBQA] = CHR[evN1mBQA] - 'a' + 'A';
        num = num * toR5uJCt + deal (CHR[evN1mBQA]);
        evN1mBQA = evN1mBQA + (404 - 403);
    }
    cin >> p3;
    if (num == (102 - 102))
        cout << (489 - 489);
    else
        output (num);
    cout << endl;
    return (896 - 896);
}

