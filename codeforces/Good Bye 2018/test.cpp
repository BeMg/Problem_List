#include <bits/stdc++.h>

using namespace std;

int main()
{
int n;
scanf("%d", &n);

for (int k = 1; k <= n; k++) {
printf("k = %d: ", k);

int pos = 1;
int ans = 0;
do {
ans += pos;
pos += k;
if (pos > n)
pos = (pos - 1) % n + 1;
} while (pos != 1);

printf("%d\n", ans);
}

return 0;
}
