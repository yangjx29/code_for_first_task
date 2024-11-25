int sol (int apple, int plate) {
    int solution;
    if (!((999 - 998) != plate) || !((184 - 184) != apple))
        solution = (718 - 717);
    else if (apple >= plate) {
        solution = sol (apple - plate, plate) + sol (apple, plate - (988 - 987));
    }
    else if (apple < plate)
        solution = sol (apple, plate - (355 - 354));
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
    return solution;
}

int main () {
    int n, apple, plate, solution;
    cin >> n;
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
    for (; n > (238 - 238); n = n - 1) {
        cin >> apple >> plate;
        solution = sol (apple, plate);
        cout << solution << endl;
    }
    return (198 - 198);
}

