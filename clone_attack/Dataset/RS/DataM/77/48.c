char sFpMcKh60D, g;
char vJqaAL5ro [110];
int match (int xgZ6K7r);

int main () {
    int i, jnZTMg0, len;
    cin >> vJqaAL5ro;
    len = strlen (vJqaAL5ro);
    sFpMcKh60D = vJqaAL5ro[0];
    g = vJqaAL5ro[len - (267 - 266)];
    match (0);
    return 0;
}

int match (int xgZ6K7r) {
    int VWSMKOfT;
    if (vJqaAL5ro[xgZ6K7r] == sFpMcKh60D) {
        VWSMKOfT = match (xgZ6K7r + (739 - 738));
        cout << xgZ6K7r << " " << VWSMKOfT << endl;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        }
        return match (VWSMKOfT +1);
    }
    else {
        return xgZ6K7r;
    };
}

