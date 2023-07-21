/*2.plumber wants to check whether a pipe junction where N incoming pipes and M outgoing pipes are balanced, and, if not, needs to balance the junction by adding an input pipe oran output pipe of a suitable capacity.

At the junction, there are a set of input pipes and a set of output pipes. Each pipe has a rated capacity and an actual capacity The actual capacity for each pipe is lower than the rated capacity by a constant R, the 'rust factor, which depends on the material of the pipe, and is the same for all the pipes at the junction. For example, if the rated capacity is 65 and is 2 the actual capacity is 63

A junction is balanced if the sum of the actual capacities of the input pipes is the same as the sum of the actual capacities of the output pipes if it is not balanced, the plumber add one input pipe or one output pipe to balance the junction, and determine the rated capacity of that added pipe A

Here we have N incoming pipes and M outgoing pipes. The incoming pipes may be of different rated capacities Similarly, the outgoing pipes may also be of different rated capacities

Find the rated capacity of the pipe required to make the junction balanced if the combined actual capacity of the incoming pipes is more than the combined actual capacity of the outgoing pipes then the plumber will need to add an outgoing pipe Conversely, if the combined actual capacity of the incoming pipes is less than the combined actual capacity of the outgoing pipes then the plumber will need to add an incoming pipe

if an outgoing pipe is added then denote its rated capacity as a negative number if an incoming pipe is added then denote its rated capacity as a positive arbe
-Constraints

1<=N,M,R,<= 1000

1<=Incoming[i] Outgoing[i]<=10000

Input
The input has three lines

The first line contains three space separated integers N M R denoting the number of incoming pipes, outgoing pipes and rust factor respectively.
The second line contains N space separated integers denoting the rated capacity of each incoming pipe.
The third line contains M space separated integers denoting the rated capacity of each outgoing pipe.
Output

Print the rated capacity of the pipe required to balance the junction OR print "BALANCED if the junction is already balanced.

Time Limit

1

Explanation

Example 1
Input
3 3 2

85 75 95

70 80 45

Output

-62

Explanation

There are 3 input pipes, 3 output pipes, and the rust factor is 2.
The rated capacities of the input pipes are85,75 and 95 respectively.*/

#include <stdio.h>
#include <math.h>

void balance_junction()
{
    int N, M, R;
    scanf("%d %d %d", &N, &M, &R);

    int incoming_pipes[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &incoming_pipes[i]);
    }

    int outgoing_pipes[M];
    for (int i = 0; i < M; i++)
    {
        scanf("%d", &outgoing_pipes[i]);
    }

    int sum_incoming = 0;
    for (int i = 0; i < N; i++) {
        sum_incoming += incoming_pipes[i] - R;
    }

    int sum_outgoing = 0;
    for (int i = 0; i < M; i++)
    {
        sum_outgoing += outgoing_pipes[i] - R;
    }

    if (sum_incoming == sum_outgoing)
    {
        printf("BALANCED\n");
        return;
    }

    int required_capacity;
    if (sum_incoming > sum_outgoing)
    {
        required_capacity = -1 * (sum_incoming - sum_outgoing + R);
    } else
    {
        required_capacity = sum_outgoing - sum_incoming + R;
    }

    printf("%d\n", required_capacity);
}

int main() {
    balance_junction();
    return 0;
}
