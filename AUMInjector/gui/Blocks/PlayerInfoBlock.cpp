#include "PlayerInfoBlock.h"
#include "imgui.h"
#include "MumblePlayer.h"
#include "LoggingSystem.h"

PlayerInfoBlock::PlayerInfoBlock() {}

void PlayerInfoBlock::Update()
{
	ImGui::Text("Player Position: (%.3f, %.3f)", mumblePlayer.posCache[0], mumblePlayer.posCache[1]);
	ImGui::Text("Player is in a lobby: %s", mumblePlayer.IsInLobby() ? "True" : "False");
	ImGui::Text("Player is in a game: %s", mumblePlayer.IsInGame() ? "True" : "False");
	ImGui::Text("Player is a ghost: %s", mumblePlayer.IsGhost() ? "True" : "False");
	ImGui::Text("Player is in a meeting: %s", mumblePlayer.IsInMeeting() ? "True" : "False");
	ImGui::Text("Communications is sabotaged: %s", mumblePlayer.IsSabotaged() ? "True" : "False");
	ImGui::Text("Player is an imposter: %s", mumblePlayer.IsImposter() ? "True" : "False");
}
