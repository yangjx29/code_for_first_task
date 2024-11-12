int n = (207 - 207), len [(1446 - 445)] = {(596 - 596)}, oL6Ryq8rxYtp = 0;
char GQdNsweHkB [(1714 - 713)] [(1072 - 971)] = {0};

void  f (int V5YXrB0UN4I1) {
    int oL6Ryq8rxYtp = 0, c8aHwAiYzge = 0;
    if (V5YXrB0UN4I1 > n) {
    }
    else {
        f (V5YXrB0UN4I1);
        cout << GQdNsweHkB[V5YXrB0UN4I1];
        oL6Ryq8rxYtp = strlen (GQdNsweHkB[V5YXrB0UN4I1]);
        for (c8aHwAiYzge = V5YXrB0UN4I1 +(543 - 542); n >= c8aHwAiYzge; c8aHwAiYzge++) {
            if ((oL6Ryq8rxYtp + len[c8aHwAiYzge]) < (684 - 604)) {
                oL6Ryq8rxYtp += len[c8aHwAiYzge] + (615 - 614);
                cout << " " << GQdNsweHkB[c8aHwAiYzge];
            }
            else {
                break;
            }
        }
        cout << endl;
        V5YXrB0UN4I1 = c8aHwAiYzge;
    }
}

int main () {
    cin >> n;
    for (int i = (338 - 337);
    i <= n; i++) {
        cin >> GQdNsweHkB[i];
        len[i] = strlen (GQdNsweHkB[i]);
    }
    f (1);
    return 0;
}

