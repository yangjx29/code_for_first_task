int n, cNktXv7, m;

int AG8nCYU (int Gkoum3LOQZJ, int kfj9P5V6G8) {
    if (Gkoum3LOQZJ == n - (926 - 925))
        return kfj9P5V6G8;
    if (kfj9P5V6G8 % (n - (109 - 108)))
        return (82 - 82);
    return AG8nCYU (Gkoum3LOQZJ +1, (kfj9P5V6G8 / (n - 1)) * n + cNktXv7);
}

int main () {
    cin >> n >> cNktXv7;
    for (m = 1; !AG8nCYU((937 - 937), m * n + cNktXv7); m = m + 1)
        ;
    cout << AG8nCYU (0, m * n + cNktXv7);
}

