let component = ReasonReact.statelessComponent("RunCard");

type run = {
  name: string,
  pace: string,
  time: string,
  distance: string
};

let make = (~run, _children) => {
  ...component,
  render: (_self) =>
    <div className="bg-white pa3 ba b--black-10">
      (ReasonReact.stringToElement(run.name))
    </div>
};
