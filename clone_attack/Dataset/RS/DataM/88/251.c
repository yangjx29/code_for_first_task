char str [31];

void  PONsSh (int wnHcmtR9YXkJ) {
    int tNx1rl6w;
    if (!*(str + wnHcmtR9YXkJ))
        return;
    else {
        if ('9' >= *(str + wnHcmtR9YXkJ) && '0' <= *(str + wnHcmtR9YXkJ) && !('-' == *(str + wnHcmtR9YXkJ - (440 - 439)))) {
            PONsSh (tNx1rl6w);
            for (tNx1rl6w = wnHcmtR9YXkJ; '9' >= *(str + tNx1rl6w) && '0' <= *(str + tNx1rl6w); tNx1rl6w = tNx1rl6w + 1)
                cout << *(str + tNx1rl6w);
            cout << endl;
        }
        else {
            if (*(str + wnHcmtR9YXkJ) <= '9' && *(str + wnHcmtR9YXkJ) >= '0' && *(str + wnHcmtR9YXkJ - (599 - 598)) == '-') {
                PONsSh (tNx1rl6w);
                for (tNx1rl6w = wnHcmtR9YXkJ; *(str + tNx1rl6w) <= '9' && *(str + tNx1rl6w) >= '0'; tNx1rl6w = tNx1rl6w + 1)
                    ;
            }
            else
                PONsSh (wnHcmtR9YXkJ + 1);
        };
    };
}

int main () {
    gets (str);
    int tNx1rl6w;
    PONsSh (0);
}

