#ifndef ROOM_H
#define ROOM_H

#include "../core/game.h"

extern int roomId;

RoomGrid *createRoomGrid(char* roomName);

RoomTile ***createRoomTilesArray(RoomGrid *room);
RoomTile *createRoomTile(Position pos, char symbol);

void placeTile(RoomTile *tile);

RoomTile *getRoomTileFromGrid(RoomGrid *room, Position pos);
void printDoorDetails(Door *door);

int getDistancePos(Position pos1, Position pos2);
int checkValidPosition(RoomGrid room, Position pos);

Entity **getEntitiesAroundPoint(RoomGrid *room, Position targetPos);

int isRoomCleared(RoomGrid *room);

void printRoomCleared(RoomGrid *room, Entity *player);

void printRoomDetails(RoomGrid *room);

int isOnDoor(RoomGrid *room, Entity *entity);


#endif
