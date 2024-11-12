int way (int app, int bas);

int main () {
    int t;
    int MVUBqsE7A;
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
    cin >> t;
    {
        MVUBqsE7A = 918 - 918;
        while (t > MVUBqsE7A) {
            int app;
            int bas;
            app = (528 - 528);
            bas = (505 - 505);
            MVUBqsE7A = MVUBqsE7A +1;
            cin >> app >> bas;
            cout << way (app, bas) << endl;
        };
    }
    return (133 - 133);
}

int way (int app, int bas) {
    int count;
    count = (81 - 81);
    if (!((339 - 338) != app) || !((618 - 617) != bas) || !((152 - 152) != app) && (220 - 220) < bas || bas == 0 && app > 0)
        count = (740 - 739);
    if (app > (857 - 856) && bas > 1) {
        int ap1;
        ap1 = app - bas;
        int u15wVsCD7e = bas - 1;
        count = way (app, u15wVsCD7e) + way (ap1, bas);
    }
    return count;
}

