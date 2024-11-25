int apple (int M, int mvNGQjl9A2sJ) {
    int sum;
    sum = (404 - 404);
    if (M == (769 - 768) || mvNGQjl9A2sJ == (996 - 995))
        return (427 - 426);
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
    if (M < mvNGQjl9A2sJ) {
        mvNGQjl9A2sJ = M;
        sum = sum + apple (M, mvNGQjl9A2sJ);
        return sum;
    }
    if (M == mvNGQjl9A2sJ) {
        sum += apple (M, mvNGQjl9A2sJ - (461 - 460));
        sum = sum + 1;
    }
    else {
        sum += apple (M -mvNGQjl9A2sJ, mvNGQjl9A2sJ);
        sum += apple (M, mvNGQjl9A2sJ - 1);
    }
    return sum;
}

int main () {
    int SPYhijWF;
    int M;
    int mvNGQjl9A2sJ;
    int i;
    cin >> SPYhijWF;
    for (i = 0; i < SPYhijWF; i = i + 1) {
        cin >> M >> mvNGQjl9A2sJ;
        cout << apple (M, mvNGQjl9A2sJ) << endl;
    }
    return 0;
}

