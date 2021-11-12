# Mixtream
A browser for simultaneous AI assisted viewing of multiple audio, video, webgl web sources in AR space or flatscreens


## Interface (flatscreen)

Current web page takes full screen.

If no web page is open, [EmptyPage](#EmptyPage) opens

### EmptyPage
  - Has "Go to" text field (url/google search)
  - Has "current mixtream" YAML editable multi line text field
  - Lists all key bindings for the platform.
  - Active corners are shown and their command is indicated

### Active Corner Commands
#### Enable curation mode

#### Audio switch to next/previous tab

Switches audio source to next/prevous tab

#### Switch to next/previous tab

Switches view (but not audio, if audio was separately switched during this session) to next or previous tab

#### Lock/unlock in tab interaction

If page is unlocked allowes user to click on elements of page in tab


### Curation mode commands
#### Enable/disable audio
Per page. Pages with disabled audio don't participate in audio source switching


#### Select Region of Interest

When pressed, Crop selector is shown on current tab. Its draggable. After confirmation of selection of the region of the webpage, selected region of this tab becomes floating over the foreground tabs (except this one). Selection on this tab stays
 - "Show Region only if UI present is detected" checkbox

#### Per page screen size adjustment

Place screen left right, content is in the middle. Show resize markers when curation mode is enabled




