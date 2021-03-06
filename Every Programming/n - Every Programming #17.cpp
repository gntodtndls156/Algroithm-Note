/* 
0과 1로 만들어진 2D 정수 배열이 있습니다. 
0은 장애물이고 1은 도로일 때, 두 좌표가 주어지면, 첫번째 좌표에서 두번째 좌표까지 가장 가까운 거리를 구하시오.
두 좌표는 모두 도로에서 시작되고 좌, 우, 아래, 위로 움직이며 대각선으로는 움직일 수 없습니다.
만약 갈 수 없다면 -1을 리턴하시오.

Given a 2D array with 0s and 1s, 0 represents an obstacle and 1 represents a road, Find the closest distance between two given points.
You must only move up down right left.
You can not move through an obstacle.

예제)
Input: {{1, 0, 0, 1, 1, 0},
{1, 0, 0, 1, 0, 0},
{1, 1, 1, 1, 0, 0},
{1, 0, 0, 0, 0, 1},
{1, 1, 1, 1, 1, 1}}
Start: (0, 0)
Finish: (0, 4)

Output: 8
 */

