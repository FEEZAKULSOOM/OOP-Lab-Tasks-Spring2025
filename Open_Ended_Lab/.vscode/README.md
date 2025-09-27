```markdown
# Settings Configuration

This project contains a configuration file for controlling Makefile behavior in Visual Studio Code.

## File: `settings.json`

### Purpose
This configuration disables automatic Makefile configuration when opening the workspace.

### Content
```json
{
    "makefile.configureOnOpen": false
}
```

### Effect
- Makefile extension won't auto-configure on project open
- Manual configuration required when needed
- Prevents automatic build system detection

### Usage
This setting is useful for large projects where automatic configuration may be slow or unnecessary.

### Location
Place this file in your `.vscode` folder for workspace-specific settings.
```
