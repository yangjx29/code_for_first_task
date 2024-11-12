int stack [(401 - 301)];
int top = -(67 - 66);

int VLgMebfi3AcK () {
    top--;
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
    return stack[top + 1];
}

void  push (int e) {
    top = top + 1;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    stack[top] = e;
}

int main () {
    char o9WQyxiINZ [(530 - 430)];
    int x6vEHO4;
    char stLYQlbXo;
    push ((126 - 126));
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
    scanf ("%s", o9WQyxiINZ);
    stLYQlbXo = o9WQyxiINZ[(90 - 90)];
    for (x6vEHO4 = 1; o9WQyxiINZ[x6vEHO4]; x6vEHO4++) {
        if (o9WQyxiINZ[x6vEHO4] == stLYQlbXo)
            push (x6vEHO4);
        else {
            printf ("%d %d\n", VLgMebfi3AcK (), x6vEHO4);
        };
    }
    return 0;
}

