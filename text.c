#include "common.h"

SDL_Texture *loadTexture(App app, char *filename)
{
	SDL_Texture *texture;

	// SDL_LogMessage(SDL_LOG_CATEGORY_APPLICATION, SDL_LOG_PRIORITY_INFO, "Loading %s", filename);

	texture = IMG_LoadTexture(app.renderer, filename);

	return texture;
}